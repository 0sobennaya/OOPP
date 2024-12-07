using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Text;
using System.Threading.Tasks;

namespace Lab5Dmitrieva
{
    static internal class Utilites
    {
        private static bool CorrectInputType<T>(string input, out T result) where T : IComparable<T>
        {
            try
            {
                result = (T)Convert.ChangeType(input, typeof(T));
                return true;
            }
            catch
            {
                result = default;
                return false;
            }
        }
        public static bool DataIsCorrect<T>(ref T value, T low , T high) where T : IComparable<T>
        {
            string input = Console.ReadLine();

            bool isCorrect = CorrectInputType(input, out T currentValue);
            if (isCorrect && currentValue.CompareTo(low) >= 0 && currentValue.CompareTo(high) <= 0)
            {
                value = currentValue;
                return true;
            }
            return false;
        }
        public static T CheckEnter<T>(T low, T high) where T : IComparable<T>
        {
            T x = default;
            while (!DataIsCorrect(ref x, low, high))
            {
                Console.WriteLine($"Введите значение от {low} до {high}");
            }
            return x;
        }
    }
}
