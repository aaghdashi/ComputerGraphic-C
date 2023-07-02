using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Text;
using System.Windows.Forms;
using Tao.OpenGl;
using Tao.FreeGlut;

namespace _
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent(); 
            simpleOpenGlControl1.InitializeContexts();
        }
 
        int convert_y_value(int y)
        {
            return simpleOpenGlControl1.Size.Height - y;

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            
            
        }

        private void simpleOpenGlControl1_Paint(object sender, PaintEventArgs e)
        {
            Gl.glClearColor(0, 0, 0, 100);
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            Glu.gluOrtho2D(0, 640,0, 480);
            //simpleOpenGlControl1.SwapBuffers();

        }

        //***********************************   Data    **************************************************
            
            
        //-----------------------------------   Code    --------------------------------------------------


        private void button1_Click(object sender, EventArgs e)
        {
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            {
                bresenhum(100,100, 400,100);
                bresenhum(400, 100, 400, 300);
                bresenhum(400, 300, 100, 300);
                bresenhum( 100, 300,100, 100);
            }
            simpleOpenGlControl1.SwapBuffers();
        }


        void bresenhum(int x1, int y1, int x2, int y2)
        {
            int x, y,xin=0, yin=0,dx, dy, len,lenx=0,leny=0, i;
            dx = x2 - x1;
            dy = y2 - y1;
            
            if (dx > 0)
                xin=1;
            else if (dx<0)
                xin = -1;

            if (dy > 0)
                yin = 1;
            else if (dy < 0)
                yin = -1;

            if (Math.Abs(dx) > Math.Abs(dy))
                len = Math.Abs(dx);
            else
                len = Math.Abs(dy);

            dx = Math.Abs(dx);
            dy = Math.Abs(dy);

            x = x1;
            y = y1;

            for (i = 0; i <= len; i++)
            {
                lenx += dx;
                leny += dy;
                if (lenx>=len)
                {
                    lenx -= len;
                    x +=(int) xin;
                }
                if (leny >= len)
                {
                    leny -= len;
                    y +=(int) yin;
                }
                Gl.glBegin(Gl.GL_POINTS);
                    Gl.glVertex3f(x,480-y, 0);
                Gl.glEnd();
            }

        }
       
       
        //---------------------------------------------------------------------------------------------------
    }
}