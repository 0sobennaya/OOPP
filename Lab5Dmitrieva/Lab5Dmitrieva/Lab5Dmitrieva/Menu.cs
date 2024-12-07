using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Lab5Dmitrieva
{
    internal class Menu
    {
        public static void PrintMenu()
        {
            Console.WriteLine("- - - Выберите действие: - - -");
            Console.WriteLine("1. Добавить товар");
            Console.WriteLine("2. Добавить продукт питания");
            Console.WriteLine("3. Просмотр товаров");
            Console.WriteLine("4. Сохранить в файл");
            Console.WriteLine("5. Загрузить из файла");
            Console.WriteLine("6. Очистить список товаров");
            Console.WriteLine("0. Выйти");
        }
        public static void MainMenu()
        {
            
            Dmitrieva_market market = new();
            int choice;
            do
            {
                PrintMenu();
                choice = Utilites.CheckEnter<int>(0,6);

                switch (choice)
                {
                    case 1:
                        {
                            Dmitrieva_product product = new();
                            product.AddProduct();
                            market.AddProduct(product);
                            Console.WriteLine("Товар добавлен в список");
                            break;
                        }
                    case 2:
                        {
                            Food food = new();
                            food.AddProduct();
                            market.AddFood(food);
                            Console.WriteLine("Продукт добавлен в список");
                            break;
                        }
                    case 3:
                        {
                            if (market.Products.Count !=0)
                            {
                                foreach (var product in market.Products)
                                {
                                    product.Print();
                                    Console.WriteLine("----------------------");
                                }
                            }
                            else
                            {
                                Console.WriteLine("Список товаров пуст");
                            }
                            break;
                        }
                    case 4:
                        {
                            market.Save();
                            break;
                        }
                    case 5:
                        {
                            Console.WriteLine("При загрузке вы потеряете текущий список товаров. Продолжить? (1 - да, 0 - нет)");
                            bool ok;
                            ok = Convert.ToBoolean(Utilites.CheckEnter<int>(0, 1));
                            if (ok)
                            {
                                market.Load();
                             
                            }
                            break;
                        }
                    case 6:
                        {
                            market.DeleteData();
                            Console.WriteLine("Список товаров очищен");
                            break;
                        }



                }

            } while (choice != 0);
        }

    }
}
