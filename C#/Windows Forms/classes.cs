namespace WinFormsApp3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public class student
        {
            public string saxeli;
            public string gvari;
            private int asaki;

            public void asakistvis(int shetanili_asaki)
            {
                // ვანიჭებთ მნიშვნელობას private int asaki ცვლადს
                asaki = shetanili_asaki - 5;
            }

            public int dabruneba()
            {
                // ვაბრუნებთ private int asaki ცვლადის მნიშვნელობას
                return asaki;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            student studenti = new student();

            studenti.saxeli = textBox1.Text;
            studenti.gvari = textBox2.Text;
            // ვანიჭებთ მნიშნველობას ასაკის გამომთვლელ ფუნქციას
            studenti.asakistvis((Int32)numericUpDown1.Value);

            // აქ ამოვიღებთ მნიშვნელობას დაბრუნების ფუნქციით
            label4.Text = studenti.saxeli + " " + studenti.gvari + " " + studenti.dabruneba().ToString() + " წლის";
        }
    }
}
