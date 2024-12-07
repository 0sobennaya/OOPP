using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace Lab5Dmitrieva
{
    [Serializable]
    public class Dmitrieva_product
    {
        public string Name { get; set; }
        public float Price { get; set; }
        public int Amount { get; set; }
        public bool IsActive { get; set; }
        public virtual void AddProduct()
        {
            Console.WriteLine("Введите название товара:");
            while (string.IsNullOrEmpty(Name))
            {
                Name = Console.ReadLine();
            }
            Console.WriteLine("Введите стоимость от 1.0 до 10 000.0:");
            Price = Utilites.CheckEnter<float>((float)1.0, (float)10000.0);
            Console.WriteLine("Введите количество от 0 до 100:");
            Amount = Utilites.CheckEnter<int>(0, 100);
            Console.WriteLine("Доступен для заказа? (1 - да, 0 - нет):");
            IsActive = Convert.ToBoolean(Utilites.CheckEnter<int>(0, 1)); 
        }
        public virtual void Print()
        {
            Console.WriteLine($"НАЗВАНИЕ:                                                 {Name}");
            Console.WriteLine($"СТОИМОСТЬ:                                                {Price}");
            Console.WriteLine($"КОЛИЧЕСТВО:                                               {Amount}");
            Console.WriteLine($"ДОСТУПЕН ДЛЯ ЗАКАЗА (1 - ДА, 0 - НЕТ):                    {Convert.ToInt32(IsActive)}");
        }
    }
}
