/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#pragma warning(disable: 4786)

// SYSTEM INCLUDES
//
#include <string>

// PROJECT INCLUDES
//

// LOCAL INCLUDES
//

// FORWARD REFERENCES
//

/*! <One line description>
 *
 * \ingroup <GroupName>
 *
 * <A longer description> 
 *
 * \see <Something>
 ****************************************************************************/
class Number
{
protected:
    /*! \name Life Cycle */
    //{@
    //! Default constructor.
    Number();
    //! Copy constructor.
    Number(const Number& rSource) = delete;
    //! Destructor.
    virtual ~Number();
    //@}
 
public:
    /*! \name Operations */
    //{@
    static Number* instance();
    void PrintInfo();
    //@}
    
    /*! \name Access */
    //{@
    std::wstring GetType() const { return m_Type; }
    static void SetType(std::wstring type) { m_Type = type; }

    int GetValue() const { return m_Value; }
    void SetValue(int val) { m_Value = val; }
    //@}

protected:
    /*! \name Attributes */
    //{@
    int m_Value; // Octal needs to access this member, make it friendly.
    //@}
private:
    /*! \name Attributes */
    //{@
    static Number* m_pInstance;
    static std::wstring m_Type;
    //@}
};