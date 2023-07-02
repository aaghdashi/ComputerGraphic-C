using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;
using Tao.OpenGl;
using Tao.FreeGlut;


namespace Default
{
    public partial class Form1 : Form
    {
        Timer mytimer = new Timer();

 
        float convert_y_value(float y)
        {
            return simpleOpenGlControl1.Size.Height - y;

        }
        public Form1()
        {
            InitializeComponent();
            simpleOpenGlControl1.InitializeContexts();
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            Gl.glClearColor(0, 0, 0, 100);
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            Glu.gluOrtho2D(0, 640, 0, 480);

            mytimer.Interval = 1;
            mytimer.Tick += new EventHandler(mytimer_Tick);
        }
        //___________________________________________________________________________________________________________________

        void mytimer_Tick(object sender, EventArgs e)
        {
            //mytimer.Stop();
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            {

            }
            simpleOpenGlControl1.SwapBuffers();
            //mytimer.Start();
        }

        Class1 c = new Class1();

        private void button1_Click(object sender, EventArgs e)
        {
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            {
                c.drow_sin();

                
            }
            simpleOpenGlControl1.SwapBuffers();
        }

        //___________________________________________________________________________________________________________________
    }
}
