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

        float rot_h=90, rot_m=90, rot_s=90;

        public void cir_par_1(float r, float teta)
        {
            float  x, y;
                x =(float) Math.Cos(teta*3.14/180) * r;
                y = (float)Math.Sin(teta * 3.14 / 180) * r;
                line(0,0,x,y);

        }

        public void line(float x1,float y1, float x2,float y2)
        {
            float x, y;
            Gl.glBegin(Gl.GL_LINES);
                Gl.glVertex3f(x1,y1, 0);
                Gl.glVertex3f(x2,y2, 0);

            Gl.glEnd();

        }

        public void saat(float r_h, float r_m, float r_s)
        {
            rot_s-=6;
            rot_m = rot_m - 1/10.0f;
            rot_h = rot_h - 1/120.0f;

            cir_par_1(r_s, rot_s);
            cir_par_1(r_m, rot_m);
            cir_par_1(r_h, rot_h);


        }



        //____________________________________________________________________________________________________________
    }
}

