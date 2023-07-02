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
        float convert_y_value(float y)
        {
            //return simpleOpenGlControl1.Size.Height - y;
            return 480 - y;
        }


        public void cir_rad(int xc,int yc,int r)
        {
            int x, y;
            Gl.glBegin(Gl.GL_POINTS);
            for (int i = -r; i <= r; i++)
            {
                y =Convert.ToInt16( Math.Sqrt(r*r-i*i));
                Gl.glVertex3f(i+xc, convert_y_value(y+yc), 0);
                Gl.glVertex3f(i + xc, convert_y_value(-y + yc), 0);
            }
            Gl.glEnd();

        }


        public void cir_par_1(int xc, int yc, int r)
        {
            float  x, y;
            Gl.glBegin(Gl.GL_POINTS);
            for (float teta = 0; teta <360; teta+=180/(3.14f*r))
            {
                x =(float) Math.Cos(teta) * r;
                y =(float) Math.Sin(teta) * r;
                Gl.glVertex3f( x+ xc, convert_y_value(y+yc), 0);
            }
            Gl.glEnd();

        }

        
        public void cir_par_8(int xc, int yc, int r)
        {
            float x, y;
            Gl.glBegin(Gl.GL_POINTS);
            for (float teta = 0; teta < 45; teta +=0.1f)
            {
                x = (float)Math.Cos(teta) * r;
                y = (float)Math.Sin(teta) * r;

                Gl.glVertex3f(x + xc, convert_y_value(y + yc), 0);
                Gl.glVertex3f(-x + xc, convert_y_value(y + yc), 0);
                Gl.glVertex3f(x + xc, convert_y_value(-y + yc), 0);
                Gl.glVertex3f(-x + xc, convert_y_value(-y + yc), 0);
                Gl.glVertex3f(y + xc, convert_y_value(x + yc), 0);
                Gl.glVertex3f(-y + xc, convert_y_value(x + yc), 0);
                Gl.glVertex3f(-y + xc, convert_y_value(-x + yc), 0);
                Gl.glVertex3f(y + xc, convert_y_value(-x + yc), 0);

            }
            Gl.glEnd();

        }

        public void cir_move(int xc, int yc, int r,int smalr,float teta)
        {
            float x, y;
                x = (float)Math.Cos(teta) * r;
                y = (float)Math.Sin(teta) * r;

                cir_par_1((int) x+xc,(int)y+yc,smalr);

        }


        //____________________________________________________________________________________________________________
    }
}
