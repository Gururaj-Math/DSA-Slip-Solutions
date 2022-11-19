employee=data.frame(Name=c("Salma","Akash","Sanu","John","Sanket"),
                    Gender=c("F","M","F","M","M"),
                    Age=c(20,23,24,25,24),
                    Designation=c("CEO","ASSISTANT","Executive","Clerk","Manager")
)
print("Details of the  employees:")
print(employee[with(employee,order(Name)),])