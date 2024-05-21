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
            private int perimetri;

            public void minicheba(Label pasuxi)
            {
                perimetri = 2 *(a + b);
                pasuxi.Text = "პერიმეტრი = " + perimetri.ToString();
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Martkutxedi s = new Martkutxedi();

            s.a = (Int32)(numericUpDown1.Value);
            s.b = (Int32)(numericUpDown2.Value);

            s.minicheba(label4);
        }
    }
}
