-- მონაცემთა ბაზის შექმნა.
CREATE DATABASE Market
    ON PRIMARY (
            NAME = Market,
            FILENAME = 'C:\bazebi\Market.mdf',
            SIZE = 20 MB,
            MAXSIZE = 80 MB,
            FILEGROWTH = 20 MB
        );

    LOG ON (
        NAME = Market_log,
        FILENAME = 'C:\bazebi\Market_log.ldf',
        SIZE = 10 MB,
        MAXSIZE = 50 MB,
        FILEGROWTH = 20 %
    );


-- ცხრილების შექმნა (სვეტების განსაზღვრა ტიპის, ატრიბუტების, შეზღუდვების ჩათვლით).
CREATE TABLE departments (
    id INT PRIMARY KEY, -- primary key სვეტი
    department_name NVARCHAR(100) NOT NULL -- დეპარტამენტის სახელის სვეტი რომელიც ვერ იქნება ცარიელი
);

CREATE TABLE employees (
    id INT PRIMARY KEY,
    name NVARCHAR(100),
    position NVARCHAR(50),
    salary MONEY,
    department_id INT,
    FOREIGN KEY (department_id) REFERENCES departments(id) -- გარე გასაღების განსაზღვრა
);


-- ცხრილის შეცვლა გარე გასაღების განსაზღვრის მიზნით.
ALTER TABLE employees
    ADD CONSTRAINT fk_department
        FOREIGN KEY (department_id) REFERENCES departments(id);


-- ცხრილის შევსება მონაცემებით.
INSERT INTO departments (id, department_name)
    VALUES (1, 'Human Resources'),
           (2, 'Finance'),
           (3, 'Engineering');

INSERT INTO employees (id, name, position, salary, department_id)
    VALUES (1, 'John Doe', 'Manager', 75000.00, 1),
           (2, 'Jane Smith', 'Analyst', 60000.00, 2),
           (3, 'Emily Davis', 'Engineer', 85000.00, 3);


-- ცხრილიდან მონაცემების ამორჩევა, ამ მონაცემების სორტირება და გაფილტრვა.
SELECT * FROM employees
    WHERE salary > 50000 -- იმ თანამშრომლების გაფილტვრა ვისი ხელფასიც აღემატება 50000-ს
        ORDER BY salary DESC; -- შედეგის დალაგება კლების მიხედვით (ASC / DESC)


-- არსებულ ცხრილიდან ახალ ცხრილში მონაცემების გადატანა.
CREATE TABLE employees_archive (
    id INT,
    name NVARCHAR(100),
    position NVARCHAR(50),
    salary DECIMAL(10, 2),
    department_id INT
);

INSERT INTO employees_archive (id, name, position, salary, department_id)
    SELECT id, name, position, salary, department_id
        FROM employees
            WHERE salary > 50000; -- იმ თანამშრომლების გაფილტვრა ვისი ხელფასიც აღემატება 50000-ს

-- არსებულ ცხრილში მონაცემების განახლება.
UPDATE sales
    SET amount = amount * 1.3; -- 30% ით გაზრდა


-- არსებულ ცხრილში მონაცემების წაშლა.
-- აღებულ სვეტში ყველა იმ სტრიქონის ამოშლა რომელიც ამ დეპარტამენტის აიდის შეეფერება
DELETE FROM employees
    WHERE department_id = 2;
-- აღებულ სვეტში ერთი სტრიქონის ამოშლა
DELETE FROM employees
    WHERE id = 1;
-- აღებულ სვეტში ყველა სტრიქონის ამოშლა
DELETE FROM employees


-- აგრეგირების ფუნქციების გამოყენება.
SELECT department_id, SUM(salary) AS total_salary
    FROM employees
        GROUP BY department_id; -- დააჯგუფოს როგორც department_id და გამოთვალოს ყველა დეპარტამენტის მთლიანი ხელფასი


-- ჯგუფური ოპერაციების გამოყენება.
SELECT department_id, COUNT(*) AS employee_count
    FROM employees
        GROUP BY department_id; -- დააჯგუფოს როგორც department_id და დაითვალოს თანამშრომლების რაოდენობა ყველა დეპარტამენტში


-- კავშირის უზრუნველყოფა რამოდენიმე ცხრილს შორის.
SELECT e.name, d.department_name
    FROM employees e
        JOIN departments d ON e.department_id = d.id;


-- ორი ცხრილის სტრიქონების
SELECT name FROM employees
    UNION   -- გაერთიანება
        SELECT name FROM contractors;
SELECT name FROM employees
    EXCEPT  -- სხვაობა
        SELECT name FROM contractors;
SELECT name FROM employees
    INTERSECT   -- გადაკვეთა
        SELECT name FROM contractors;


-- ჩაშენებული ფუნქციების გამოყენება.
SELECT UPPER(name) AS uppercase_name, GETDATE() AS current_time
    FROM employees; -- აკონვერტირებს სახელს და გვაძლევს ზუსტ დროს


-- წარმოდგენების შექმნა.
CREATE VIEW high_earners AS
    SELECT name, salary
        FROM employees
            WHERE salary > 60000; -- წარმოდგენის შექმნა იმ თანამშრომლებისთვის ვისი ხელფასიც აღემატება 60000-ს


-- ცვლადები, ცვლადისთვის მნიშვნელობის მინიჭება.
DECLARE @total_salary DECIMAL(10, 2); -- ცვლადის განსაზღვრა
    SET @total_salary = (SELECT SUM(salary) FROM employees); -- ცვლადისთვის მნიშვნლეობის მინიჭება
        SELECT @total_salary AS TotalSalary; -- ცვლადის არჩევა მნიშვნელობის გამოსატანად