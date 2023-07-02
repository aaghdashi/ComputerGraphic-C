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

        public void bresenhum(float x1, float y1, float x2, float y2,float density)
        {
            float den = 1 / density;
            float x, y, xin = 0, yin = 0, dx, dy, len, lenx = 0, leny = 0, i;
            dx = x2 - x1;
            dy = y2 - y1;

            if (dx > 0)
                xin = den;
            else if (dx < 0)
                xin = -den;

            if (dy > 0)
                yin = den;
            else if (dy < 0)
                yin = -den;

            if (Math.Abs(dx) > Math.Abs(dy))
                len = Math.Abs(dx);
            else
                len = Math.Abs(dy);

            dx = Math.Abs(dx);
            dy = Math.Abs(dy);

            x = x1;
            y = y1;

            for (i = 0; i <= len; i+=den)
            {
                lenx += dx;
                leny += dy;
                if (lenx >= len)
                {
                    lenx -= len;
                    x += (float)xin;
                }
                if (leny >= len)
                {
                    leny -= len;
                    y += (float)yin;
                }
                Gl.glBegin(Gl.GL_POINTS);
                Gl.glVertex3f(x,y, 0);
                Gl.glEnd();
            }

        }

        public void line_rot(float xc, float yc, float r,  float teta)
        {
            float x, y;

            x = (float)Math.Cos(teta * 3.14f / 180) * r;        // tabdile daraje be radiyan ->  radiyan=daraje*3.14/180
            y = (float)Math.Sin(teta * 3.14f / 180) * r;

            bresenhum(xc,yc,x,y,200);
            cir_par_1(x, y, 0.1f);
        }


        //____________________________________________________________________________________________________________
    }
}
