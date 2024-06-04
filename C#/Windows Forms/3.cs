namespace WinFormsApp5
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        public class Samkutxedi
        {
            public int perimetri(int a, int b, int c)
            {
                int p = a+b+c;

                return p;
            }

            public int fartobi(int b, int h)
            {
                int S = (b*h)/2;

                return S;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Samkutxedi samkutxedi = new Samkutxedi();

            perimetriLabel.Text = samkutxedi.perimetri(5, 10, 20).ToString();
            fartobiLabel.Text = samkutxedi.fartobi(10, 15).ToString();
        }
    }
}
