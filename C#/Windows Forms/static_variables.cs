namespace WinFormsApp7
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public class Klasi
        {
            public static int ricxvi;

            public static int metodi()
            {
                return ricxvi*ricxvi;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {

            Klasi.ricxvi = Convert.ToInt32(textBox1.Text);

            label1.Text = Convert.ToString(Klasi.metodi());
        }
    }
}
