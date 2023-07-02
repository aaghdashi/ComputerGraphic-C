using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Tao.OpenGl;


namespace Default
{
    class clscircle
    {
        //____________________________________________________________________________________________________________

        float smal_x = -0.4f, smal_y = 0, smal_inc_x = 0.01f, smal_inc_y = 0.01f;


        public void cir_rad(float xc, float yc, float r,float den)
        {
            den = 1 / den;
            float y;
            Gl.glBegin(Gl.GL_POINTS);
            for (float i = -r; i <= r; i+=den)
            {
                y =(float) Math.Sqrt(r * r - i * i);
                Gl.glVertex3f(i + xc,y + yc, 0);
                Gl.glVertex3f(i + xc, -y + yc, 0);
            }
            Gl.glEnd();

        }

        public void cir_par_1(float xc, float yc, float r)
        {
            float  x, y;
            Gl.glBegin(Gl.GL_POINTS);
            for (float teta = 0; teta < 360; teta +=0.1f)
            {
                x =(float) Math.Cos(teta) * r;
                y =(float) Math.Sin(teta) * r;
                Gl.glVertex3f( x+ xc,y+yc, 0);
            }
            Gl.glEnd();

        }

        
        public void cir_move_simple(float big_x, float big_y, float big_r, float smal_r)
        {
            float true_x, true_y;
            cir_rad(big_x, big_y, big_r, 200);


            true_x = (float)Math.Sqrt(big_r * big_r - smal_y * smal_y);
            if (smal_x + smal_inc_x > true_x || smal_x + smal_inc_x < -true_x)
                smal_inc_x = -smal_inc_x;

            true_y = (float)Math.Sqrt(big_r * big_r - smal_x * smal_x);
            if (smal_y + smal_inc_y > true_y || smal_y + smal_inc_y < -true_y)
                smal_inc_y = -smal_inc_y;

            smal_x += smal_inc_x;
            smal_y += smal_inc_y;

            cir_par_1(smal_x, smal_y, smal_r);

        }
        
        public void cir_move_random(float big_x, float big_y, float big_r, float smal_r)
        {
            float true_x, true_y;
            Random r=new Random();

            cir_rad(big_x, big_y, big_r, 200);


            true_x = (float)Math.Sqrt(big_r * big_r - smal_y * smal_y);
            true_y = (float)Math.Sqrt(big_r * big_r - smal_x * smal_x);

            while (smal_x + smal_inc_x+smal_r > true_x || smal_x + smal_inc_x-smal_r < -true_x || smal_y + smal_inc_y+smal_r > true_y || smal_y + smal_inc_y -smal_r < -true_y)
            {
                //smal_inc_x =(float) r.Next(-10, 10) / 100;
                //smal_inc_y = (float)r.Next(-10, 10) / 100;

                if (r.Next(1, 10) >= 5)
                {
                    smal_inc_x = (float)r.Next(-1, 2) / 100;
                    while (smal_inc_x==0 )
                        smal_inc_x = (float)r.Next(-1, 2) / 100;
                    smal_inc_y = (float)r.Next(-10, 11) / 1000;
                }
                else 
                {
                    smal_inc_x = (float)r.Next(-10, 11) / 1000;
                    smal_inc_y = (float)r.Next(-1, 2) / 100;
                    while (smal_inc_y==0 )
                        smal_inc_y = (float)r.Next(-1, 2) / 100;

                }
            }



            smal_x += smal_inc_x;
            smal_y += smal_inc_y;

            cir_par_1(smal_x, smal_y, smal_r);

        }

        


        //____________________________________________________________________________________________________________
    }
}
