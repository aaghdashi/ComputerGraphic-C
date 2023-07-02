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

        clsnode list;

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

        private void button1_Click(object sender, EventArgs e)
        {
            Gl.glClear(Gl.GL_COLOR_BUFFER_BIT);
            {
                draw_ploy();
            }
            simpleOpenGlControl1.SwapBuffers();
        }

        void draw_ploy()
        {
            clsnode  c;
            c =list;
            if (c != null)
            {
                if (c.next != null)
                {
                    //.........................................
                    while (c.next != null)
                    {
                            draw_tri(list.x,list.y, c.x, c.y, c.next.x, c.next.y);
                            c = c.next;
                    }
                    //.........................................
                }
            }

        }

      
        void draw_tri(int x1, int y1, int x2, int y2, int x3, int y3)
        {
            int x, y, xin = 0, yin = 0, dx, dy, len, lenx = 0, leny = 0, i;
            dx = x3 - x2;
            dy = y3 - y2;

            if (dx > 0)
                xin = 1;
            else if (dx < 0)
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

            x = x2;
            y = y2;

            for (i = 0; i <= len; i++)
            {
                lenx += dx;
                leny += dy;
                if (lenx >= len)
                {
                    lenx -= len;
                    x += (int)xin;
                }
                if (leny >= len)
                {
                    leny -= len;
                    y += (int)yin;
                }

                bresenhum(x1, y1, x, y);
            }

        }


        void bresenhum(int x1, int y1, int x2, int y2)
        {
            int x, y, xin = 0, yin = 0, dx, dy, len, lenx = 0, leny = 0, i;
            dx = x2 - x1;
            dy = y2 - y1;

            if (dx > 0)
                xin = 1;
            else if (dx < 0)
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
                if (lenx >= len)
                {
                    lenx -= len;
                    x += (int)xin;
                }
                if (leny >= len)
                {
                    leny -= len;
                    y += (int)yin;
                }
                Gl.glBegin(Gl.GL_POINTS);
                Gl.glVertex3f(x, 480 - y, 0);
                Gl.glEnd();
            }

        }

        private void button2_Click_1(object sender, EventArgs e)
        {
           clsnode c = list;

           if (c == null)
           {
               c = new clsnode();
               c.x = Convert.ToInt16(textBox1.Text);
               c.y = Convert.ToInt16(textBox2.Text);
               list = c;
           }
           else
           {
               while (c.next != null)
                   c = c.next;

               c.next = new clsnode();
               c.next.x = Convert.ToInt16(textBox1.Text);
               c.next.y = Convert.ToInt16(textBox2.Text);
           }
           

            
        }

        
        //___________________________________________________________________________________________________________________
    }
}
