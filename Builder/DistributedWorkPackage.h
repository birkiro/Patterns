/*! \company               $CompanyInfo:$
*   \version               $Revision:$
*   \checkindate           $Date:$
*   \file                  $RCSfile:$
***************************************************************************/
#pragma once
#pragma warning(disable: 4786)

// SYSTEM INCLUDES
//

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
class DistributedWorkPackage
{
public:
    /*! \name Life Cycle */
    //{@
    //! Default constructor.
    DistributedWorkPackage(char *type);
    //@}

    //! Copy constructor.
    DistributedWorkPackage(const DistributedWorkPackage& rSource) = delete;
    //! Destructor.
    virtual ~DistributedWorkPackage(){}
    //@}

    /*! \name Operators */
    //{@
    //! Assignment operator.
    DistributedWorkPackage& operator = (const DistributedWorkPackage& rRhs) = delete;
    //@}

    /*! \name Operations */
    //{@
    void SetFile(char *f, char *v);
    void SetQueue(char *q, char *v);
    void SetPathway(char *p, char *v);
    void AppendString();
    const char* GetState();
    //@}

private:
    /*! \name Attributes */
    //{@
    char m_Description[200], m_TempString[80];
    //@}
};