using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication9
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void panel1_Paint(object sender, PaintEventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            int ects = 0;

            if(checkBox1.Checked){
                ects += 6;
            }
            if (checkBox2.Checked)
            {
                ects += 3;
            }
            if (checkBox3.Checked)
            {
                ects += 5;
            }
            if (checkBox4.Checked)
            {
                ects += 6;
            }

            krediti.Text = ects.ToString();
        }

        private void button2_Click(object sender, EventArgs e)
        {
            checkBox1.Checked = false;
            checkBox2.Checked = false;
            checkBox3.Checked = false;
            checkBox4.Checked = false;
        }

        private void button3_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button4_Click(object sender, EventArgs e)
        {
            if (!radioButton1.Checked)
            {
                button1.Enabled = false;
                MessageBox.Show("თქვენ ვერ აირჩევთ საგნებს.");
            }
            else
            {
                MessageBox.Show("თქვენ შეგიძლიათ აირჩიოთ საგნები.");
                button1.Enabled = true;
            }
        }
    }
}