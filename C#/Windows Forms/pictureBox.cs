namespace WinFormsApp1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            pictureBox1.Image = new Bitmap("C:\\Users\\Begi\\Desktop\\eclipse\\static\\images\\discord-icon.png");
            pictureBox1.Refresh();

            Thread.Sleep(2000);

            pictureBox1.Image = new Bitmap("C:\\Users\\Begi\\Desktop\\eclipse\\static\\images\\Eclipse.png");
            pictureBox1.Refresh();

            Thread.Sleep(2000);

            pictureBox1.Image = new Bitmap("C:\\Users\\Begi\\Desktop\\eclipse\\static\\images\\google-icon.png");
            pictureBox1.Refresh();
        }
    }
}
