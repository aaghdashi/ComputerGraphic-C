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

       

        public void line(float x1,float y1, float x2,float y2)
        {
            Gl.glBegin(Gl.GL_LINES);
                Gl.glVertex3f(x1,y1, 0);
                Gl.glVertex3f(x2,y2, 0);

            Gl.glEnd();

        }

        public void alla(float rot,float r)
        {
            float x1, y1;
            x1 =(float) Math.Cos(rot*3.14/180) * r;
            y1 = (float)Math.Sin(rot * 3.14 / 180) * r;

            
            
            line(x1,y1,-x1,-y1);

        }



        //____________________________________________________________________________________________________________
    }
}

