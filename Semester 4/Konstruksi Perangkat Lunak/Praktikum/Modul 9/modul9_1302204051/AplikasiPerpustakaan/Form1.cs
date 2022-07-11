using System.Data;
using System.Reflection;

namespace AplikasiPerpustakaan
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public DataTable ToDataTable<T>(List<T> items)
        {
            DataTable dataTable = new DataTable(typeof(T).Name);
            //Get all the properties
            PropertyInfo[] Props = typeof(T).GetProperties(BindingFlags.Public | BindingFlags.Instance);
            foreach (PropertyInfo prop in Props)
            {
                //Setting column names as Property names
                dataTable.Columns.Add(prop.Name);
            }
            foreach (T item in items)
            {
                var values = new object[Props.Length];
                for (int i = 0; i < Props.Length; i++)
                {
                    //inserting property values to datatable rows
                    values[i] = Props[i].GetValue(item, null);
                }
                dataTable.Rows.Add(values);
            }
            //put a breakpoint here and check datatable
            return dataTable;
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            string path = Directory.GetParent(Directory.GetCurrentDirectory()).Parent.FullName + "\\databuku.json";
            List<Buku> list_buku = new List<Buku>();
            Raw raw = Raw.getRecord(path);

            list_buku = raw.buku;

            dgvDataBuku.DataSource = this.ToDataTable(list_buku);

            inputStatus.SelectedItem = "disimpan";
            inputIdBuku.SelectedItem = 1;

            foreach (Buku item in raw.buku)
            {
                this.inputIdBuku.Items.Add(item.idBuku);
            }
        }
    }
}