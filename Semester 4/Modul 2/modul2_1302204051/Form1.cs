using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace modul2_1302204051
{
    public partial class Form1 : Form
    {
        int firstNumber;
        string operation;

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            if (labelOutput.Text == "0" && labelOutput.Text != null)
            {
                labelOutput.Text = "1";
            } 
            else
            {
                labelOutput.Text = labelOutput.Text + "1";
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            if (labelOutput.Text == "0" && labelOutput.Text != null)
            {
                labelOutput.Text = "2";
            }
            else
            {
                labelOutput.Text = labelOutput.Text + "2";
            }
        }

        private void button3_Click(object sender, EventArgs e)
        {
            if (labelOutput.Text == "0" && labelOutput.Text != null)
            {
                labelOutput.Text = "3";
            }
            else
            {
                labelOutput.Text = labelOutput.Text + "3";
            }
        }

        private void button8_Click(object sender, EventArgs e)
        {
            if (labelOutput.Text == "0" && labelOutput.Text != null)
            {
                labelOutput.Text = "4";
            }
            else
            {
                labelOutput.Text = labelOutput.Text + "4";
            }
        }

        private void labelOutput_Click(object sender, EventArgs e)
        {

        }

        private void buttonPlus_Click(object sender, EventArgs e)
        {
            firstNumber = int.Parse(labelOutput.Text);
            labelOutput.Text = "0";
            operation = "+";
        }

        private void button5_Click(object sender, EventArgs e)
        {
            if (labelOutput.Text == "0" && labelOutput.Text != null)
            {
                labelOutput.Text = "5";
            }
            else
            {
                labelOutput.Text = labelOutput.Text + "5";
            }
        }

        private void button6_Click(object sender, EventArgs e)
        {
            if (labelOutput.Text == "0" && labelOutput.Text != null)
            {
                labelOutput.Text = "6";
            }
            else
            {
                labelOutput.Text = labelOutput.Text + "6";
            }
        }

        private void button7_Click(object sender, EventArgs e)
        {
            if (labelOutput.Text == "0" && labelOutput.Text != null)
            {
                labelOutput.Text = "7";
            }
            else
            {
                labelOutput.Text = labelOutput.Text + "7";
            }
        }

        private void button8_Click_1(object sender, EventArgs e)
        {
            if (labelOutput.Text == "0" && labelOutput.Text != null)
            {
                labelOutput.Text = "8";
            }
            else
            {
                labelOutput.Text = labelOutput.Text + "8";
            }
        }

        private void button9_Click(object sender, EventArgs e)
        {
            if (labelOutput.Text == "0" && labelOutput.Text != null)
            {
                labelOutput.Text = "9";
            }
            else
            {
                labelOutput.Text = labelOutput.Text + "9";
            }
        }

        private void button0_Click(object sender, EventArgs e)
        {
            labelOutput.Text = labelOutput.Text + "0";
        }

        private void buttonEqual_Click(object sender, EventArgs e)
        {
            int secondNumber;
            int result;

            secondNumber = int.Parse(labelOutput.Text);

            if (operation == "+")
            {
                result = (firstNumber + secondNumber);
                labelOutput.Text = result.ToString();
            }
        }

        private void buttonC_Click(object sender, EventArgs e)
        {
            labelOutput.Text = "0";
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }
    }
}
