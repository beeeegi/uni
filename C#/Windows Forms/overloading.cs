namespace WinFormsApp7
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public class Samkutxedi
        {
            public int gamotvla(int a, int b, int c)
            {
                int p = a + b + c;

                return p;
            }

            public int gamotvla(int b, int h)
            {
                int S = (b * h) / 2;

                return S;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Samkutxedi samkutxedi = new Samkutxedi();

            int fartobi = samkutxedi.gamotvla(Int32.Parse(textBox2.Text), Int32.Parse(textBox1.Text));
            int perimetri = samkutxedi.gamotvla(Int32.Parse(textBox2.Text), Int32.Parse(textBox3.Text), Int32.Parse(textBox4.Text));

            label1.Text = $"ფართობი: {fartobi}";
            label2.Text = $"პერიმეტრი: {perimetri}";
        }
    }
}
