namespace WinFormsApp7
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public class Figura
        {
            int gverdi1;
            int gverdi2;

            public Figura(int gverdi)
            {
                gverdi1 = gverdi;
            }

            public int kvadrati()
            {
                int kvadrati = gverdi1 * gverdi1;
                return kvadrati;
            }

            public Figura(int pirveli, int meore)
            {
                gverdi1 = pirveli;
                gverdi2 = meore;
            }

            public int martkutxedi()
            {
                int martkutxedi = (gverdi1 + gverdi2)*2;

                return martkutxedi;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Figura figura = new Figura(Convert.ToInt32(textBox1.Text));
            label1.Text = $"კვადრატის ფართობი: {Convert.ToString(figura.kvadrati())}";

            Figura figura2 = new Figura(Convert.ToInt32(textBox1.Text), Convert.ToInt32(textBox2.Text));
            label2.Text = $"მართკუთხედის პერიმეტრი: {Convert.ToString(figura2.martkutxedi())}";
        }
    }
}
