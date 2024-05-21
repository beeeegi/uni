namespace WinFormsApp3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public class Ricxvi
        {
            private int ricxvi;

            public void minicheba(int sheyvanili_ricxvi)
            {
                ricxvi = sheyvanili_ricxvi;
            }
            public bool gamorkveva()
            {
                if (ricxvi % 2 == 0)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Ricxvi s = new Ricxvi();

            s.minicheba((Int32)numericUpDown1.Value);

            if (s.gamorkveva() == true) {
                label4.Text = "შეყვანილი რიცხვი ლუწია";
            }
            else
            {
                label4.Text = "შეყვანილი რიცხვი კენტია";
            }
        }
    }
}
