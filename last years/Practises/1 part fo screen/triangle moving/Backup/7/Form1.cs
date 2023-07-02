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
            
            mytimer.Tick += new EventHandler(mytimer_Tick);
        }

        private void simpleOpenGlControl1_Paint(object sender, PaintEventArgs e)
        {
            Gl.glClearColor(0, 0, 0, 100);
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            Glu.gluOrtho2D(0, 640, 0, 480);
            //simpleOpenGlControl1.SwapBuffers();
            
            mytimer.Interval = 1;
            mytimer.Start();
        }

        //***********************************   Data    **************************************************
        int x1 = 20, y1 = 35, xin1 = 1, yin1 = 1;
        int x2 = 100, y2 = 0, xin2 = 1, yin2 = 1;
        int x3 = 50, y3 = 100, xin3 = 1, yin3 = 1;
            
        //-----------------------------------   Code    --------------------------------------------------

        void mytimer_Tick(object sender, EventArgs e)
        {
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            {
                xin1 = fix_plus(x1, xin1,640);
                xin2 = fix_plus(x2, xin2,640);
                xin3 = fix_plus(x3, xin3,640);
                yin1 = fix_plus(y1, yin1,480);
                yin2 = fix_plus(y2, yin2,480);
                yin3 = fix_plus(y3, yin3,480);

                add_values();

                Gl.glBegin(Gl.GL_LINE_LOOP );
                    Gl.glVertex3f(x1, convert_y_value(y1), 0);
                    Gl.glVertex3f(x2, convert_y_value(y2), 0);
                    Gl.glVertex3f(x3, convert_y_value(y3), 0);
                Gl.glEnd(); 
            } 
            simpleOpenGlControl1.SwapBuffers();
        }


        int fix_plus(int refrenc,int plus,int max)
        {
            if (refrenc + plus == max) return -1;
            if (refrenc + plus == 0) return 1;
            return plus;

        }

        void add_values()
        {
            x1 += xin1;
            x2 += xin2;
            x3 += xin3;
            
            y1 += yin1;
            y2 += yin2;
            y3 += yin3;

        }
        //---------------------------------------------------------------------------------------------------
    }
}