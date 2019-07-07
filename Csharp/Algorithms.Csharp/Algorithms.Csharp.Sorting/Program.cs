using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Algorithms.Csharp.Sorting
{
    public class Program
    {
        static void Main(string[] args)
        {
            int[] arr = new int[] { 3, 8, 2, 0, 9, 5, 1, 8, 11, 7, 35, 1 };
            SelectionSort.Sort(arr);

            for (int i = 0; i < arr.Length; i++)
            {
                Console.Write(arr[i] + " ");
            }

            Console.ReadLine();
        }
    }
}
