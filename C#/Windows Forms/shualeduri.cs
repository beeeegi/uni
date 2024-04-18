namespace shualeduri
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label1_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click_1(object sender, EventArgs e)
        {
            double sum = 0;

            if (radioButton1.Checked)
            {
                sum += 5000;
            }
            if (radioButton2.Checked)
            {
                sum += 4500;
            }
            if (radioButton3.Checked)
            {
                sum += 8500;
            }

            if (checkBox1.Checked)
            {
                sum += 1100;
            }
            if (checkBox2.Checked)
            {
                sum += 560;
            }
            if (checkBox3.Checked)
            {
                sum += 2000;
            }

            if (aqcia.Checked)
            {
                double percentage = (10.5 * sum)/100;
                sum -= percentage;
            }

            gadasaxdeli.Text = "გადასახდელია: " + sum.ToString();
        }
    }
}
