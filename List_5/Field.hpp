/*--------------------- field.cpp ---------------- */

#include "gmpxx.h"

// mpz_t - typ z c sluzacy do przechowywania duzych liczb

template <mpz_t mod>
class Field
{
  private:
    mpz_class value;

  public:
    // Field() {}

    Field(mpz_t value)
    {
    }

    Field(mpz_class value)
    {
    }

    Field(int value)
    {
    }

    void getValue(mpz_t ret)
    {
    }

    mpz_class getValue()
    {
    }

    Field operator+(Field const &obj)
    {
    }

    Field operator-(Field const &obj)
    {
    }

    Field operator-()
    {
    }

    Field operator*(Field const &obj)
    {
    }

    Field operator/(Field const &obj)
    {
    }

    Field operator%(Field const &obj)
    {
    }

    bool operator==(Field const &rhs)
    {
    }

    bool operator!=(Field const &rhs)
    {
    }
};