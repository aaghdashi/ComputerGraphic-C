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
        Timer mytimer = new Timer();


        public Form1()
        {
            InitializeComponent(); 
            simpleOpenGlControl1.InitializeContexts();
        }
 
        float convert_y_value(float y)
        {
            return simpleOpenGlControl1.Size.Height - y;

        }

        private void Form1_Load(object sender, EventArgs e)
        {
            mytimer.Interval = 500;
            mytimer.Tick += new EventHandler(mytimer_Tick);
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

        void mytimer_Tick(object sender, EventArgs e)
        {
            //mytimer.Stop();
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            {
                
            } 
            simpleOpenGlControl1.SwapBuffers();
            //mytimer.Start();
        }


        private void button1_Click(object sender, EventArgs e)
        {
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            {
                ddaline(0 , convert_y_value(0) , 400 , convert_y_value(400) );
                
            }
            simpleOpenGlControl1.SwapBuffers();
        }


        void ddaline(float x1, float y1, float x2, float y2)
        {
            float dx, dy, len, i;
            float xin, yin, x, y;
            dx = x2 - x1;
            dy = y2 - y1;
            if (Math.Abs(dx) > Math.Abs(dy))
                len = Math.Abs(dx);
            else
                len = Math.Abs(dy);
            x = x1;
            y = y1;
            xin = (float)dx / len;
            yin = (float)dy / len;

            for (i = 0; i <= len; i++)
            {
                Gl.glBegin(Gl.GL_POINTS);
                Gl.glVertex3f(x, y, 0);
                Gl.glEnd();
                x += xin;
                y += yin;
            }
        }
       
        //---------------------------------------------------------------------------------------------------
    }
}