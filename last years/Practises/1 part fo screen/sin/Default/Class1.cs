using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using Tao.OpenGl;

namespace Default
{
    class Class1
    {

        public void   drow_sin()
        {
            int x ;
            float y;
            for (x=0; x<960;x++)
            {
                y = 240+240 * (float)Math.Sin((x * 3.14f / 180) * 360 / 960);

                 Gl.glBegin(Gl.GL_POINTS);
                    Gl.glVertex3f(x*640/960,y,0);
                Gl.glEnd();
            }
        }


    }
}
