using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Serialization;

namespace Lab5Dmitrieva
{
    public class Dmitrieva_market
    {
        public List<Dmitrieva_product> Products { get; set; }
        public Dmitrieva_market() { Products = []; }
        public void AddProduct(Dmitrieva_product product)
        {
            Products.Add(product);
        }
        public void AddFood(Food food)
        {
            Products.Add(food);

        }
        public void Save()
        {
            Console.WriteLine("Введите название файла:");
            try
            {
                string filename = Console.ReadLine();
                var xs = new XmlSerializer(typeof(List<Dmitrieva_product>), new[] { typeof(Dmitrieva_product), typeof(Food) });
                using Stream fs = new FileStream($"{filename}.xml", FileMode.OpenOrCreate);
                xs.Serialize(fs, Products);

                Console.WriteLine("Данные успешно сохранены");
            }
            catch
            {
                Console.WriteLine("Не удалось сохранить данные");
            }

        }
        public void Load()
        {
            Console.WriteLine("Введите название файла:");
            try
            {
                string filename = Console.ReadLine();
                var xs = new XmlSerializer(typeof(List<Dmitrieva_product>), new[] { typeof(Dmitrieva_product), typeof(Food) });
                using Stream fs = new FileStream($"{filename}.xml", FileMode.Open);
                Products = xs.Deserialize(fs) as List<Dmitrieva_product>;

                Console.WriteLine("Данные успешно загружены");
            }
            catch
            {
                Console.WriteLine("Не удалось загрузить данные");

            }
        }
        public void DeleteData()
        {
            Products.Clear();
        }
    }
}
