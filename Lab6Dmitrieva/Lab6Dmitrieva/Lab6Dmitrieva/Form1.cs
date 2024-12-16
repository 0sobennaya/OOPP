using System.Runtime.InteropServices;
using System.Text;

namespace Lab6Dmitrieva
{
    public partial class Form1 : Form
    {
        [DllImport("DmitrievaDLL.dll", CallingConvention = CallingConvention.Cdecl)]
        private static extern void LoadData(IntPtr market, StringBuilder filename);

        [DllImport("DmitrievaDLL.dll", CallingConvention = CallingConvention.Cdecl)]
        private static extern IntPtr CreateMarket();

        [DllImport("DmitrievaDLL.dll", CallingConvention = CallingConvention.Cdecl)]
        private static extern void DeleteMarket(IntPtr market);
        [DllImport("DmitrievaDLL.dll", CallingConvention = CallingConvention.Cdecl)]
        private static extern int GetSizeMarket(IntPtr market);
        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog();
            openFileDialog.InitialDirectory = Directory.GetCurrentDirectory();
            if (openFileDialog.ShowDialog() == DialogResult.OK)
            {
                var FileName = new StringBuilder(openFileDialog.FileName);
                IntPtr market = CreateMarket();
                LoadData(market, FileName);
                int n = GetSizeMarket(market);

                listProducts.Items.Add(Convert.ToString(n));


            }

        }

        private void listProducts_SelectedIndexChanged(object sender, EventArgs e)
        {

        }
    }
}
