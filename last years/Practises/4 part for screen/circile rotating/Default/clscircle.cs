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

        public void cir_par_1(float xc, float yc, float r)
        {
            float x, y;
            Gl.glBegin(Gl.GL_POINTS);
            for (float teta = 0; teta < 360; teta += 0.1f)
            {
                x = (float)Math.Cos(teta) * r;
                y = (float)Math.Sin(teta) * r;
                Gl.glVertex3f(x + xc, y + yc, 0);
            }
            Gl.glEnd();

        }

        public void cir_lines( float r,float rot)
        {
            float x, y;
            
                x = (float)Math.Cos(rot*3.14f/180) * r;
                y = (float)Math.Sin(rot*3.14f/180) * r;
                line(x, y, -x, -y);
                x = (float)Math.Cos((rot+90) * 3.14f / 180) * r;
                y = (float)Math.Sin((rot+90) * 3.14f / 180) * r;
                line(x, y, -x, -y);

        }


        public void line(float x1,float y1, float x2,float y2)
        {
            float x, y;
            Gl.glBegin(Gl.GL_LINES);
                Gl.glVertex3f(x1,y1, 0);
                Gl.glVertex3f(x2,y2, 0);

            Gl.glEnd();

        }

        public void rot_cir(float x,  float r,float rot)
        {
            
            
            Gl.glTranslatef(x, 0, 0);
            cir_par_1(0,0, r);
            cir_lines(r, rot);


        }



        //____________________________________________________________________________________________________________
    }
}

