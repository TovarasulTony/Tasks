using System;
using System.IO;
using System.Security.Cryptography;

namespace Password
{
    class Program
    {
        static void Main(string[] args)
        {
            string password;
            Aes myAes = Aes.Create();

            Console.WriteLine("Please insert the password that you are using for every online account(yeah... you do that):");
            password = Console.ReadLine();

            Console.WriteLine(password);

            Aes aesAlg = Aes.Create();
            ICryptoTransform encryptor = aesAlg.CreateEncryptor(myAes.Key, myAes.IV);
            MemoryStream msEncrypt = new MemoryStream();
            CryptoStream csEncrypt = new CryptoStream(msEncrypt, encryptor, CryptoStreamMode.Write);
            StreamWriter swEncrypt = new StreamWriter(csEncrypt);

            swEncrypt.Write(password);
            var encrypted = msEncrypt.ToArray();

            //----

            Aes aesAlg_2 = Aes.Create();
            ICryptoTransform decryptor = aesAlg_2.CreateDecryptor(myAes.Key, myAes.IV);
            MemoryStream msDecrypt = new MemoryStream(encrypted);
            CryptoStream csDecrypt = new CryptoStream(msDecrypt, decryptor, CryptoStreamMode.Read);
            StreamReader srDecrypt = new StreamReader(csDecrypt);

            var decrypted = srDecrypt.ReadToEnd();

            Console.WriteLine(decrypted);

            Console.ReadLine();
        }
    }
}
