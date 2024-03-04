namespace davaleba
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        // 3.1.1
        private void button1_Click(object sender, EventArgs e)
        {
            double a;

            a = double.Parse(textBox1.Text);

            if (a < 0)
            {
                label1.Text = "რიცხვი უარყოფითია";
            }
            else
            {
                label1.Text = "რიცხვი დადებითია";
            }
        }

        // 3.1.2
        private void button2_Click(object sender, EventArgs e)
        {
            double a;

            a = double.Parse(textBox2.Text);

            if (a % 2 == 0)
            {
                label2.Text = "რიცხვი ლუწია";
            }
            else
            {
                label2.Text = "რიცხვი კენტია";
            }
        }

        // 3.1.3
        private void button3_Click(object sender, EventArgs e)
        {
            double a;

            a = double.Parse(textBox3.Text);

            if (a % 5 == 0)
            {
                label3.Text = "რიცხვი 5ის ჯერადია";
            }
            else
            {
                label3.Text = "რიცხვი არ არის 5ის ჯერადი";
            }
        }

        // 3.1.4
        private void button4_Click(object sender, EventArgs e)
        {
            int a;

            a = int.Parse(textBox4.Text);

            if (a == 30)
            {
                label4.Text = "თქვენ შეიყვანეთ 30";
            }
            else
            {
                label4.Text = "თქვენ არ შეგიყვანიათ 30";
            }
        }

        // 3.1.5
        // 3.1.6, 3.1.7 და 3.1.8 აღარ გავაკეთე რადგან უბრალოდ რიცხვები უნდა შემეცვალა.
        private void button5_Click(object sender, EventArgs e)
        {
            double a;

            a = double.Parse(textBox5.Text);

            if (a > 10)
            {
                label5.Text = "რიცხვი მეტია 10ზე";
            }
            else
            {
                label5.Text = "რიცხვი არ არის 10ზე მეტი";
            }
        }

        // 3.1.9 და 3.1.10 გავაერთიანე.
        private void button6_Click(object sender, EventArgs e)
        {
            double a, b;

            a = double.Parse(textBox7.Text);
            b = double.Parse(textBox8.Text);

            double max = Math.Max(a, b);
            double min = Math.Min(a, b);

            label6.Text = $"მაქსიმალური: {max}";
            label7.Text = $"მინიმალური: {min}";
        }
    }
}
