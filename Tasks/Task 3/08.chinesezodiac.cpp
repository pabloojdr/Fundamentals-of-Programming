//08.chinesezodiac.cpp
//Pablo Julián Campoy Fernández 15-10-2021

#include <iostream>
using namespace std;

int main()

{
    int year;

    cout << "Please, enter the year you were born: " << endl;
    cin >> year;

    if (year == 1900 or year == 1912 or year == 1924 or year == 1936 or year == 1948 or year == 1960 or year == 1972 or year == 1984 or year == 1996 or year == 2008 or year == 2020) {
        cout << "Your chinese zodiac is \"Rat\".";
    }

    else if (year == 1901 or year == 1913 or year == 1925 or year == 1937 or year == 1949 or year == 1961 or year == 1973 or year == 1985 or year == 1997 or year == 2009 or year == 2021) {
        cout << "Your chinese zodiac is \"Ox\".";
    }

    else if (year == 1902 or year == 1914 or year == 1926 or year == 1938 or year == 1950 or year == 1962 or year == 1974 or year == 1986 or year == 1998 or year == 2010 or year == 2023) {
        cout << "Your chinese zodiac is \"Tiger\".";
    }

    else if (year == 1903 or year == 1915 or year == 1927 or year == 1939 or year == 1951 or year == 1963 or year == 1975 or year == 1987 or year == 1999 or year == 2011 or year == 2024) {
        cout << "Your chinese zodiac is \"Rabbit\".";
    }

    else if (year == 1904 or year == 1916 or year == 1928 or year == 1940 or year == 1952 or year == 1964 or year == 1976 or year == 1988 or year == 2000 or year == 2012 or year == 2025) {
        cout << "Your chinese zodiac is \"Dragon\".";
    }

    else if (year == 1905 or year == 1917 or year == 1929 or year == 1941 or year == 1953 or year == 1965 or year == 1977 or year == 1989 or year == 2001 or year == 2013 or year == 2026) {
        cout << "Your chinese zodiac is \"Snake\".";
    }

    else if (year == 1906 or year == 1918 or year == 1930 or year == 1942 or year == 1954 or year == 1966 or year == 1978 or year == 1990 or year == 2002 or year == 2014 or year == 2027) {
        cout << "Your chinese zodiac is \"Horse\".";
    }

    else if (year == 1907 or year == 1919 or year == 1931 or year == 1943 or year == 1955 or year == 1967 or year == 1979 or year == 1991 or year == 2003 or year == 2015 or year == 2028) {
        cout << "Your chinese zodiac is \"Goat\".";
    }

    else if (year == 1908 or year == 1920 or year == 1932 or year == 1944 or year == 1956 or year == 1968 or year == 1980 or year == 1992 or year == 2004 or year == 2016 or year == 2029) {
        cout << "Your chinese zodiac is \"Monkey\".";
    }

    else if (year == 1909 or year == 1921 or year == 1933 or year == 1945 or year == 1957 or year == 1969 or year == 1981 or year == 1993 or year == 2005 or year == 2017 or year == 2030) {
        cout << "Your chinese zodiac is \"Rooster\".";
    }

    else if (year == 1910 or year == 1922 or year == 1934 or year == 1946 or year == 1958 or year == 1970 or year == 1982 or year == 1994 or year == 2006 or year == 2018 or year == 2031) {
        cout << "Your chinese zodiac is \"Dog\".";
    }

    else if (year == 1911 or year == 1923 or year == 1935 or year == 1947 or year == 1959 or year == 1971 or year == 1983 or year == 1995 or year == 2007 or year == 2019 or year == 2032) {
        cout << "Your chinese zodiac is \"Pig\".";
    }

    return 0;
}
