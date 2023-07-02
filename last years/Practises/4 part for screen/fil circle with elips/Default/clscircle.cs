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


        public void cir_rad(int xc, int yc, int r)
        {
            int x, y;
            Gl.glBegin(Gl.GL_POINTS);
            for (int i = -r; i <= r; i++)
            {
                y = Convert.ToInt16(Math.Sqrt(r * r - i * i));
                Gl.glVertex3f(i + xc,y, 0);
                Gl.glVertex3f(i + xc, -y, 0);
            }
            Gl.glEnd();

        }


        public void elips(float xc, float yc, float rx,float ry)
        {
            float x, y;
            Gl.glBegin(Gl.GL_POINTS);
            for (float i = xc-rx; i <= xc+rx; i+=0.01f)
            {
                float rad =(float) ( ry / rx *  Math.Sqrt(rx * rx - (i - xc) * (i - xc)));

                Gl.glVertex3f(i +xc, yc+rad, 0);
                Gl.glVertex3f(i + xc, yc - rad, 0);
            }
            Gl.glEnd();

        }

        public void fil_elips(float x,float y,float rx,float ry)
        {

            elips(x,y,rx,ry);

            for (float i = 0.1f; i < ry; i += 0.1f)
            {
                elips(x, y, rx, i);
            }
            for (float i = 0.1f; i < rx; i += 0.1f)
            {
                elips(x, y, i, ry);
            }


        }



        //____________________________________________________________________________________________________________
    }
}

