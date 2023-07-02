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
        

        public Form1()
        {
            InitializeComponent();
            simpleOpenGlControl1.InitializeContexts();
        }
        private void Form1_Load(object sender, EventArgs e)
        {
            Gl.glClearColor(0, 0, 0, 100);
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            
            mytimer.Interval = 10;
            mytimer.Tick += new EventHandler(mytimer_Tick);
        }
        //___________________________________________________________________________________________________________________

        clscircle cc = new clscircle();
        float rot=10, rot_inc = 1;

        void mytimer_Tick(object sender, EventArgs e)
        {
            mytimer.Stop();
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            {
                

            }
            simpleOpenGlControl1.SwapBuffers();
            mytimer.Start();
        }


        private void button1_Click(object sender, EventArgs e)
        {
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            {
                cc.fil_elips(0,0,0.5f,0.5f);


            }
            simpleOpenGlControl1.SwapBuffers();

        }

        //___________________________________________________________________________________________________________________
    }
}
