CREATE DATABASE Market
	ON PRIMARY
	(
		NAME = Market,
		FILENAME = 'C:\bazebi\Market.mdf',
		SIZE = 20 MB,
		MAXSIZE = 80 MB,
		FILEGROWTH = 20 MB
	)
	LOG ON
	(
		NAME = Market_log,
		FILENAME = 'C:\bazebi\Market_log.ldf',
		SIZE = 10 MB,
		MAXSIZE = 50 MB,
		FILEGROWTH = 20%
	)
  
go

create table Suppliers(
    SupplierID nvarchar(30) primary key,
    Phone nvarchar(10) UNIQUE
)

go

create table Products(
	ID int primary key,
	ProdName nvarchar(20) not null,
	Price money,
	ProdCount int default 10,
	Supplier nvarchar(30);
)

go
  
alter table Products
add foreign key(Supplier) references Suppliers(SupplierID)

go
  
insert into Suppliers (SupplierID, Phone)
values 
('Nikora', '269 50 55'),
('Nataxtari', '236 91 93'),
('Ipqli', '218 00 04');

insert into Products (ID, ProdName, Price, ProdCount, Supplier)
values 
(1, 'sosisi', 14.50, 10, 'Nikora'),
(2, 'dzexvi', 4.80, 20, 'Nikora'),
(3, 'limonati', 2.55, 30, 'Nataxtari'),
(4, 'ludi', 4.00, 40, 'Nataxtari'),
(5, 'puri', 0.90, 35, 'Ipqli'),
(6, 'puntusha', 1.20, 25, 'Ipqli'),
(7, 'qada', 1.70, 15, 'Ipqli');

go

select Price, ProdCount from Products where Price < 2 and Prodcount < 20

go

UPDATE Sales SET Price = 0.9 * Price / 50000 ფასის შემცირებ 50 %-ით ნიშნავს მის განხევრებას: set Price=Price/2;

go

delete from Sales where Supplier = 'Ipqli'

go

