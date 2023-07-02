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
            cc.rot_cir(x, r, rot);
            simpleOpenGlControl1.SwapBuffers();

            mytimer.Interval = 10;
            mytimer.Tick += new EventHandler(mytimer_Tick);
            //mytimer.Start();
        }
        //___________________________________________________________________________________________________________________

        clscircle cc = new clscircle();
        float rot = 0,r=0.15f,x=0;

        void mytimer_Tick(object sender, EventArgs e)
        {
            mytimer.Stop();
            
            mytimer.Start();
        }

        private void simpleOpenGlControl1_KeyDown(object sender, KeyEventArgs e)
        {
            //MessageBox.Show(e.KeyValue.ToString());
            if (e.KeyValue == 65 && x - r > -1)
            {
                rot++;
                x -= 0.0001f;
            }
            if (e.KeyValue == 66 && x+r<1)
            {
                rot--;
                x += 0.0001f;
            }

            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            {
                cc.rot_cir(x, r, rot);
            }
            simpleOpenGlControl1.SwapBuffers();
        }



        //___________________________________________________________________________________________________________________
    }
}
