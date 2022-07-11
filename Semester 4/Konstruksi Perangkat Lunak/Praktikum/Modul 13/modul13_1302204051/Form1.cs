using System.Text.RegularExpressions;

namespace modul13_1302204051
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void labelValue_Click(object sender, EventArgs e)
        {

        }

        private void btnSubmit_Click(object sender, EventArgs e)
        {
            String username = inputUsername.Text;
            Regex regex = new Regex(@"(\.\.\\)|(::)|(~)|(\%.*\%)|(\*)", RegexOptions.Compiled | RegexOptions.IgnoreCase);
            bool checkFilePath = regex.IsMatch(inputFilePath.Text);

            if (HasSpecialChar(username) || checkFilePath)
            {
                labelValue.Text = "Input dari user tidak valid atau tidak aman";
            }
            else
            {
                labelValue.Text = "Input dari user valid dan aman";
            }
        }

        public static bool HasSpecialChar(string input)
        {
            string specialChar = @"|!#$%&/\()=?»«@£§€{}*.-;~`'<>_,";
            foreach (var item in specialChar)
            {
                if (input.Contains(item)) return true;
            }

            return false;
        }

        private void inputFilePath_TextChanged(object sender, EventArgs e)
        {

        }
    }
}