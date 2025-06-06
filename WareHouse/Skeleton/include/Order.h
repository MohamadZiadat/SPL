#pragma once

#include <string>
#include <vector>
using std::string;
using std::vector;


class Volunteer;

enum class OrderStatus {
    PENDING,
    COLLECTING,
    DELIVERING,
    COMPLETED,
};

#define NO_VOLUNTEER -1

class Order {

    public:
        Order(int id, int customerId, int distance);
        ~Order() = default;
        int getId() const;
        int getCustomerId() const;
        void setStatus(OrderStatus _status);
        void setCollectorId(int _collectorId);
        void setDriverId(int _driverId);
        int getCollectorId() const;
        int getDriverId() const;
        OrderStatus getStatus() const;
        int getDistance() const;
        const string toString() const;
        const string StatusToString() const;
        Order* clone();


    private:
        const int id;
        const int customerId;
        const int distance;
        OrderStatus status;
        int collectorId; //Initialized to NO_VOLUNTEER if no collector has been assigned yet
        int driverId; //Initialized to NO_VOLUNTEER if no driver has been assigned yet
};