using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace WindowsFormsApplication6
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (textBox1.Text != "" && textBox2.Text != "")
            {
                double a = double.Parse(textBox1.Text);
                double b = double.Parse(textBox2.Text);

                if (a % 2 == 0)
                {
                    label1.Text = "შეყვანილი რიცხვებიდან პირველი ლუწია";
                }
                else if (b % 2 == 0)
                {
                    label1.Text = "შეყვანილი რიცხვებიდან მეორე ლუწია";
                }
                else
                {
                    label1.Text = "შეყვანილი რიცხვებიდან ორივე კენტია";
                }
            }
            else
            {
                MessageBox.Show("შეიყვანეთ რიცხვები.");
            }
        }
    }
}