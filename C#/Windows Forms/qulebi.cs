namespace WinFormsApp3
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public class Student
        {
            public float Qulebi(int[] qulebi, Label label)
            {
                int a = 0;

                for (int i = 0; i < qulebi.Length; i++)
                {
                    a += qulebi[i];
                    label.Text += qulebi[i].ToString() + "\n";
                }

                return a / qulebi.Length;
            }
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Student s = new Student();

            int[] mas = {1,5,6,7,3,12,53,28,74};
            float aritmetikuli = s.Qulebi(mas, pasuxi);

            label1.Text = "ქულების საშუალო არითმეტიკული: " + aritmetikuli.ToString();
        }
    }
}
