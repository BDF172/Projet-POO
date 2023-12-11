using System;
using System.Data.SqlClient;
using NS_services;
using NS_composants;
using System.Data;
using System.Transactions;

namespace TestProject1
{
    public class Tests
    {
        private gestionPersonnel gestionDuPersonnel;
        private Personnel monPersonnel;
        private System.Int64 idPersonnelObtenu;

        public Tests()
        {
            gestionDuPersonnel = new gestionPersonnel();
        }

        [Test]
        public void test1()
        {
            idPersonnelObtenu = gestionDuPersonnel.createPersonnel("nom correct", "prenom correct", "30", "nom de rue correct", "1", "1", "2023-12-12");
            Assert.That(idPersonnelObtenu, Is.Positive);
        }

        [Test]
        public void test2()
        {
            var mustBeTrue1 = gestionDuPersonnel.modifierAdressePersonnel(idPersonnelObtenu.ToString(), "1", "nom de rue modifie", "1");
            var mustBeTrue2 = gestionDuPersonnel.modifyPersonnel(idPersonnelObtenu.ToString(), "nom modifie", "prenom modifie", "1", "2023-12-12");
            Assert.That(mustBeTrue1 && mustBeTrue2, Is.True);
        }

        [Test]
        public void test3()
        {
            monPersonnel = gestionDuPersonnel.obtenirPersonnel(idPersonnelObtenu.ToString());
            Assert.That(monPersonnel != null, Is.True);
        }

        [Test]
        public void test4()
        {
            var mustBeTrue = gestionDuPersonnel.supprimerPersonnel(idPersonnelObtenu.ToString());
            mustBeTrue = gestionDuPersonnel.supprimerPersonnel(idPersonnelObtenu.ToString());
            Assert.That(mustBeTrue, Is.True);
        }
    }
}
