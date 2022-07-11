using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Jurnalsoal1
{
    class Program
    {
        enum State { NONAKTIF, AKTIF, CHECKOUT, EXIT };
        public static void Main(string[] args)
        {
            State state = State.NONAKTIF;
            string[] screenName = { "NONAKTIF", "AKTIF", "CHECKOUT", "EXIT" };
            int i = 0;
            double jlh = 0;
            double total = 0;
            while (state != State.EXIT)
            {
                Console.WriteLine(screenName[(int)state] + " Screen");
                Console.Write("Enter Command : ");
                string command = Console.ReadLine();

                switch (state)
                {
                    case State.NONAKTIF:
                        if (command == "tambah barang pertama")
                        {
                            i = 1;
                            state = State.AKTIF;
                            Console.Write("Nama Barang : ");
                            string input = Console.ReadLine();
                            Console.WriteLine(input);
                            total = 130219471;
                            Console.WriteLine("Total : " + total);
                        }
                        break;
                    case State.AKTIF:
                        if (command == "kurangi barang")
                        {
                            i = i - 1;
                            if (i < 10)
                            {
                                total = total * 90 / 100;
                                state = State.AKTIF;
                                Console.WriteLine("Barang : " + i);
                                Console.WriteLine("Total : " + total);
                            }
                            else
                            {
                                total = total * 85 / 100;
                                state = State.AKTIF;
                                Console.WriteLine("Barang : " + i);
                                Console.WriteLine("Total : " + total);
                            }
                        }

                        if (command == "tambah barang")
                        {
                            i = i + 1;
                            if (i <= 10)
                            {
                                total = total * 90 / 100;
                                state = State.AKTIF;
                                Console.WriteLine("Nama Barang : ");
                                string input = Console.ReadLine();
                                Console.WriteLine("Barang : " + i);
                                Console.WriteLine("Total : " + total);
                            }
                            else
                            {
                                total = total * 85 / 100;
                                state = State.AKTIF;
                                Console.WriteLine("Barang : " + i);
                                Console.WriteLine("Total : " + total);
                            }
                        }
                        if (command == "batal")
                        {
                            i = 0;
                            total = 0;
                            state = State.NONAKTIF;
                            Console.WriteLine("Barang : " + i);
                            Console.WriteLine("Total : " + total);
                        }
                        if (command == "hitung total")
                        {
                            state = State.CHECKOUT;
                            jlh = total * 10 / 100;
                            Console.WriteLine("Barang : " + i);
                            Console.WriteLine("Harga Total : " + jlh);
                        }
                        break;
                    case State.CHECKOUT:
                        if (command == "bayar sekarang")
                        {
                            Console.WriteLine("ketik y/n : ");
                            string yn = Console.ReadLine();
                            Console.WriteLine("Sukses");
                            i = 0;
                            total = 0;
                            jlh = 0;

                        }
                        state = State.EXIT;
                        break;
                }

            }
        }
    }
}