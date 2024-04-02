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

        private void button1_Click_1(object sender, EventArgs e)
        {
            int z = (int)numericUpDown1.Value + 1;

            for (int i = 1; i < z; i++)
            {
                int sum = i * i;
                label1.Text += sum.ToString() + '\n';
            }
        }
    }
}