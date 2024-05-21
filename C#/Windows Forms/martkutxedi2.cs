namespace WinFormsApp3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public class Martkutxedi
        {
            public int a; 
            public int b;

            public int minicheba(int gverdi1, int gverdi2)
            {
                a = gverdi1;
                b = gverdi2;

                int perimetri = 2 * (a + b);
                return perimetri;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Martkutxedi s = new Martkutxedi();

            pasuxi.Text = Convert.ToString(s.minicheba((Int32)(numericUpDown1.Value), (Int32)(numericUpDown2.Value)));
        }
    }
}
