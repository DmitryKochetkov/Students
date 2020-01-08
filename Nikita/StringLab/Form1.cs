using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

/*
 * Лабораторная работа из универа: написать функцию, переводящую слова строки в нижний регистр.
 * Если слово не изменено, удалить его из результирующей строки.
 */

namespace StringLab
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private string converter(string s)
        {
            string res = "";

            while (s.Contains(' '))
            {
                string word = s.Substring(0, s.IndexOf(' ') + 1);
                if (word != word.ToLower()) res += word.ToLower();
                s = s.Remove(0, s.IndexOf(' ') + 1);
            }

            if (s != s.ToLower()) res += s.ToLower();

            return res;
        }

        private void button1_Click(object sender, EventArgs e)
        {
            textBox2.Text = converter(textBox1.Text);
        }
    }
}
