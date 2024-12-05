using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace Lab5Dmitrieva
{
    [Serializable]
    public class Food : Dmitrieva_product
    {
        public int CalricContent {  get; set; }
        public bool IsVegetarian { get; set; }
        public override void AddProduct()
        {
            base.AddProduct();
            Console.WriteLine("Введите калорийность от 1 до 800:");
            CalricContent = int.Parse(Console.ReadLine());
            Console.WriteLine("Этот продукт вегетарианский? (1 - да, 0 - нет):");
            IsVegetarian = bool.Parse(Console.ReadLine());
        }
        public override void Print()
        {
            base.Print();
            Console.WriteLine($"КАЛОРИЙНОСТЬ:                                             {CalricContent}");
            Console.WriteLine($"ВЕГЕТАРИАНСКИЙ (1 - ДА, 0 - НЕТ):                         {Convert.ToInt32(IsVegetarian)}");

        }
    }
}
