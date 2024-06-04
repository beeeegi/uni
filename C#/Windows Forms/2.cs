namespace WinFormsApp5
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }
        public class Manqana
        {
            private string feri;
            private int karebi;

            public string gvari;
            public string firma;

            public Manqana(string f, int k, string g, string fi)
            {
                feri = f;
                karebi = k;
                gvari = g;
                firma = fi;
            }

            public (string, int) dabruneba()
            {
                return (feri, karebi);
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Manqana m = new Manqana("ლურჯი", 4, "ბეგიაშვილი", "ფორდი");

            var (feri, karebi) = m.dabruneba();

            feriLabel.Text = $"{feri}";
            karebiLabel.Text = $"{karebi}";

            gvariLabel.Text = m.gvari;
            firmaLabel.Text = m.firma;

            pictureBox1.Image = new Bitmap("C:\\Users\\SSU Student\\Downloads\\download.jpg");
            pictureBox1.Refresh();
            pictureBox2.Image = new Bitmap("C:\\Users\\SSU Student\\Downloads\\ford.jpg");
            pictureBox2.Refresh();
        }
    }
}
