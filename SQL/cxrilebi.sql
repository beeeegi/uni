create table Students(
    ID int primary key,
    Name nvarchar(15),
    Lastname nvarchar(25),
    Year int
)

create table Market(
    Code int primary key,
    Name nvarchar(10) not null,
    Price int,
    Amount int
)

create table Staff(
    Name nvarchar(15),
    Lastname nvarchar(25),
    Salary money,
    Ganyofileba nvarchar(30),

    primary key(Name, Lastname)
)

create table Fakultetebi(
    ID int primary key identity,
    Fakulteti nvarchar(30),
    Dekani nvarchar(30),
    Nomeri int
)

create table stud(
    ID int primary key,
    Saxeli nvarchar(15),
    Gvari nvarchar(30) not null,
    Nomeri int not null,
    Mail nvarchar(30),

    unique(Nomeri, Mail)
)