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
        int x=0, y=0,xin=1,yin=1;
            
        //-----------------------------------   Code    --------------------------------------------------

        void mytimer_Tick(object sender, EventArgs e)
        {
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            {
                if (x + xin == 640) xin = -1;
                if (x + xin == 0) xin = 1;
                if (y + yin == 480) yin = -1;
                if (y + yin == 0) yin = 1;

                x += xin;
                y += yin;

                Gl.glBegin(Gl.GL_POINTS);
                    Gl.glVertex3f(x, convert_y_value(y), 0);
                Gl.glEnd(); 
            } 
            simpleOpenGlControl1.SwapBuffers();
        }



       
        //---------------------------------------------------------------------------------------------------
    }
}